/*
 * Name: Roderick "R.J." Montague (100707158)
 * Date: 10/02/2020
 * Description: in-class exercise for implementing dll files into Unity.
 * References:
 */

using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

public class PluginTester : MonoBehaviour
{
    // the name of the DLL
    private const string DLL_NAME = "GED - LEC04";

    // cube game object
    public GameObject cube;

    [StructLayout(LayoutKind.Sequential)] // this needs to be here for the Vector2D/Vector3D to work.
    struct Vector3D
    {
        public float x;
        public float y;
        public float z;
    }

    // Get ID
    [DllImport(DLL_NAME)]
    private static extern int GetID();

    // Set ID
    [DllImport(DLL_NAME)]
    private static extern void SetID(int id);
       
    // GetPosition
    [DllImport(DLL_NAME)]
    private static extern Vector3D GetPosition();

    [DllImport(DLL_NAME)]
    private static extern void SetPosition(float x, float y, float z);

    // Start is called before the first frame update
    // void Start()
    // {
    //     
    // }

    // Update is called once per frame
    void Update()
    {
        // testing the DLL
        if(Input.GetKeyDown(KeyCode.S))
        {
            // SetID(420); // original value from the lecture
            SetID(626);
            Debug.Log(GetID());

            // using this, we can send any value across.
            // SetPosition(3.4f, 5.7f, 9.8F); // original values from the lecture
            SetPosition(2.3f, -4.1f, 15.2F);

            Debug.Log(GetPosition().x);
            Debug.Log(GetPosition().y);
            Debug.Log(GetPosition().z);

            // re-positioning the cube
            cube.transform.position = new Vector3(
                GetPosition().x,
                GetPosition().y,
                GetPosition().z
            );
        }
    }
}

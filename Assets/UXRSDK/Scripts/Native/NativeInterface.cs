using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;

using UnityEngine;

public class NativeInterface
{
    public static class NativeAPI
    {
        [DllImport("cameradata_jni")]
        public static extern void initBufferProvider(int width, int height);

        [DllImport("cameradata_jni")]
        public static extern void cleanBufferProvider();

        [DllImport("cameradata_jni")]
        public static extern void copyBuffer2Cyc(byte[] buffer, int len);
    }
}

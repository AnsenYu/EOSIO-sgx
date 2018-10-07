{
  "targets": [
    {
      "target_name": "hello",
      "cflags": ["-Wall", "-std=c++11"],
      "sources": [ "../hello.cc" ],
      "include_dirs" : [
        "<!(node -e \"require('nan')\")",
"/root/sgx/sgxsdk/include/", "/root/sgx/sgxsdk/SampleCode/SampleEnclave/App"
      ],
       "libraries": [ "-lrand", "-L/root/sgx/sgxsdk/SampleCode/SampleEnclave" ]
    }
  ]
}

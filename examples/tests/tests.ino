#include <aes.h>
#include <arcfour.h>
#include <base64.h>
#include <blowfish.h>
#include <des.h>
#include <md2.h>
#include <md5.h>
#include <rot-13.h>
#include <sha1.h>
#include <sha256.h>

void setup() {
    Serial.begin(115200);
}

void test(const char* name, bool result) {
    Serial.print(name);
    Serial.println(result ? ": SUCCEEDED" : ": FAILED");
}

void loop() {
    test("AES", aes_test());
    test("ARCFOUR", rc4_test());
    test("Base64", base64_test());
    //test("Blowfish", blowfish_test());
    test("DES", des_test());
    test("MD2", md2_test());
    test("MD5", md5_test());
    test("ROT-13", rot13_test());
    test("SHA-1", sha1_test());
    test("SHA256", sha256_test());
    
    delay(5000);
}


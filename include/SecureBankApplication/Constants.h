#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace Constants
{
    const int TIMEOUT_TIME = 5 * 60;
    const int SLEEP_TIME = 15;

    const int HEADER_SIZE = 64;
    const int SALT_SIZE = 16;
    const int MAX_BUFFER_SIZE = 4096;
    const int MAX_TRANSFERS = 5;

    const int NONCE_LENGTH = 16;
    const int AES_LENGTH = 16;
    const int HMAC_LENGTH = 32;
    const int SERVER_PORT = 8080;
    const int RECV_WINDOW = 500; // Acceptance window in milliseconds

    // Commands encoding
    const int CLIENT_HELLO = 0;
    const int LOGIN = 1;
    const int TRANSFER = 2;
    const int GET_BALANCE = 3;
    const int GET_TRANSFER_HISTORY = 4;
    const int CLOSE = 5;
    const int SERVER_HELLO = 6;
    const int KEY_EXCHANGE = 7;
    const int SERVER_OK = 8;
    const int SUCCESS = 9;
    const int INVALID_CREDENTIALS = 10;
    const int UNAUTHORIZED = 11;
    const int INVALID_AMOUNT = 12;
    const int INVALID_PARAMS = 13;
    const int INVALID_SESSION = 14;

    const std::string commands_list[15]
      = { "CLIENT_HELLO", "LOGIN", "TRANSFER", "GET_BALANCE",
        "GET_TRANSFER_HISTORY", "CLOSE", "SERVER_HELLO", 
        "KEY_EXCHANGE", "SERVER_OK", "SUCCESS", "INVALID_CREDENTIALS",
        "UNAUTHORIZED", "INVALID_AMOUNT", "INVALID_PARAMS", 
        "INVALID_SESSION" };

    const std::string EXPECTED_CERT_OWNER = "/CN=127.0.0.1:8080";
    const std::string FILE_EXT = ".txt";
}

#endif // CONSTANTS_H
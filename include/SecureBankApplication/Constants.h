#pragma once

namespace Constants {
    const int TIMEOUT_TIME = 5 * 60;

    const int HEADER_SIZE = 64;
    const int SALT_SIZE = 16;
    const int MAX_BUFFER_SIZE = 4096; // Maximum buffer size for recv
    const int MAX_TRANSFERS = 5;

    const int NONCE_LENGTH = 16;
    const int USER_ID_LENGTH = 16; // User ID length, not sure if necessary
    const int SERVER_PORT = 8080; // The port the server will use to handle incoming connections

    const int CLIENT_HELLO = 0; // Commands
    const int SERVER_HELLO = 1;
    const int KEY_EXCHANGE = 2;
    const int SERVER_OK = 3;
    const int LOGIN = 4; 
    const int TRANSFER = 5; 
    const int GET_BALANCE = 6;
    const int GET_TRANSFERS = 7; 
    const int CLOSE = 8;
    const int SUCCESS = 9;
    const int INVALID_CREDENTIALS = 10;
    const int UNAUTHORIZED = 11;
    const int INVALID_AMOUNT = 12;
    const int INVALID_PARAMS = 13;
    
    const string BASE_PATH = "";

}
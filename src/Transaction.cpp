#include <iostream>
#include <ctime>
#include "Transaction.h"

using namespace std;

ostream& operator<<(ostream& os, const Transfer& transfer) {
    string timestampStr = asctime(localtime(&transfer.timestamp));
    timestampStr = timestampStr.substr(0, timestampStr.length() - 1);  // Remove the newline character

    // Print the transfer information in a fancy format
    os << endl;
    os << "| Sender: " << transfer.sender << endl;
    os << "| Receiver: " << transfer.receiver << endl;
    os << "| Amount: $" << transfer.amount << endl;
    os << "| Timestamp: " << timestampStr << endl;;
    return os;
}
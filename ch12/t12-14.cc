#include <iostream>
#include <memory>
#include <string>
using namespace std;

struct destination {
    destination(string ip) : _ip(ip) { cout << __PRETTY_FUNCTION__ << endl;}
    string _ip;
};

struct connection {
    connection(string ip) : _ip(ip) { cout << __PRETTY_FUNCTION__ << endl;}
    string _ip;
};

connection *connect(destination *d) {
    cout << __PRETTY_FUNCTION__ << endl;   
    connection *pc = new connection(d->_ip);
    cout << pc << endl;   
    return pc;
}

void disconnect(connection *connect) {
    cout << __PRETTY_FUNCTION__ << endl;   
    cout << connect << endl;   
    delete connect;
}

void end_connection(connection *p) {
    cout << __PRETTY_FUNCTION__ << endl;   
    disconnect(p);
}

void f(destination &d) {
    connection *c = connect(&d);
    shared_ptr<connection> p(c, end_connection);
}


int main() {
    destination d("127.0.0.1");
    f(d);
    return 0;
}

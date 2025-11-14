#pragma once

#include <string>
#include <memory>

namespace http {
    class HttpServer {
    public:
        HttpServer(int port = 8080);
        ~HttpServer();
        
        bool start();
        void stop();
        void set_static_path(const std::string& path);
        
    private:
        class Impl;
        std::unique_ptr<Impl> pimpl;
    };
}

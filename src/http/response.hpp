#pragma once

#include <string>
#include <unordered_map>
namespace http {
class Response {
public:
  int status_code;
  std::string status_text;
  std::unordered_map<std::string, std::string> headers;
  std::string body;

  Response(int status = 200, const std::string &body = "");

  void set_header(std::string &name, const std::string &value);
  std::string to_string() const;

  static Response from_file(const std::string &filepath);
  static Response error(int code, const std::string &message);
};
} // namespace http

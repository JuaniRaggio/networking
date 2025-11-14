#pragma once

#include <string>
#include <unordered_map>

namespace http {
class Request {
public:
  std::string method;
  std::string path;
  std::string version;
  std::unordered_map<std::string, std::string> headers;

  static Request parse(const std::string &raw_request);
  std::string get_header(const std::string &name) const;

private:
  void parse_request_line(const std::string &line);
  void parse_header_line(const std::string &line);
};

} // namespace http

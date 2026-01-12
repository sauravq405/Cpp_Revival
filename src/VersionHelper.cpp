#include "VersionHelper.hpp"
#include <sstream>

// This is the "Definition" - the actual logic
namespace Revival::Utils {
    std::string get_gcc_version() {
        std::stringstream ss;
        ss << __GNUC__ << "." << __GNUC_MINOR__ << "." << __GNUC_PATCHLEVEL__;
        return ss.str();
    }
}
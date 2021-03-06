#ifndef FOLDERCHOOSER_H
#define FOLDERCHOOSER_H

//https://stackoverflow.com/questions/12034943/win32-select-directory-dialog-from-c-c
#include <string>
#include <shlobj.h>
#include <windows.h>
//https://stackoverflow.com/questions/2602013/read-whole-ascii-file-into-c-stdstring
#include <fstream>
#include <streambuf>
//https://stackoverflow.com/questions/612097/how-can-i-get-the-list-of-files-in-a-directory-using-c-or-c
#include <vector>
//https://stackoverflow.com/questions/40838504/how-to-search-a-txt-file-for-regex
#include <regex>

using namespace std;

string browseFolder(string start_path, string title, bool rep);

string readFile(string path);

string searchFile(string path, string reg);

vector<string> ls(string path, string filter = "*.*");

#endif //FOLDERCHOOSER_H

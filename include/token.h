#ifndef TOKEN_H
#define TOKEN_H

#include <map>

using namespace std;

enum tkID
{
  error = 00;
  identifier = 01;
  integer = 02;
  opordel = 03;
  keyword = 04;
  eof = 05;
};

struct token
{
  enum tkID id;
  string instance
  pair<int, int> position;
  pair<int, int> size;
  map<int, string> idmap =
  {
    {error, "\n SCAN ERROR:\n"},
    {identifier, "idTK"},
    {integer, "numTK"},
    {opordel, "opTK"},
    {keyword, "kwTK"},
    {eof, "eofTK"}
  };

  token(enum tkID tid, string tinstr, pair<int, int> tposition), pair<int, int> tsize: id(tid), instance(tinstr), position(tpos), size(tsize) {}

  string toString()
  {
    string sout("");
    string posString("");
    string sizeOfString("");

    posString += to_string(get<0>(position)) + ":" + to_string(get<1>(position));

    sizeOfString += to_string(get<0>(size)) + ":" + to_string(get<1>(size));

    if(id = error)
    {
      sout += idmap[id] + posString + ": " + instance;
    }
    else
    {
      sout += idmap[id];
      sout.append(16 - sout.length(), ' ');
      sout += instance;

      sout.append(28 - sout.length(), ' ');
      sout += "Line " + posString;
    }
  }
};

#endif

#include "DLL.h"

using namespace std;


activity::activity():name(nullptr),count(0)
{
}

activity::~activity()
{
	delete [] name;
}

activity::activity(const activity & to_copy):count(to_copy.count)
{
	name = new char[strlen(to_copy.name)+1];
	strcpy(name,to_copy.name);
}

activity & activity::operator=(const activity & src)
{
	if(this == &src)
		return *this;
	if(name)
		delete [] name;
	strcpy(name,src.name);
	return *this;
}
int activity::compare(const char * to_compare)
{
	return strcmp(name,to_compare);	
}
bool operator==(const activity & op1, const char * name)
{
	if(strcmp(op1.name,name) == 0)
		return true;
	else
		return false;

}
bool operator==(const char * name, const activity & op2)
{
	if(strcmp(name,op2.name) == 0)
		return true;
	else
		return false;
}
bool operator!=(const activity & op1, const char * name)
{
	if(strcmp(op1.name,name) != 0)
		return true;
	else
		return false;

}
bool operator!=(const char * name, const activity & op2)
{
	if(strcmp(name,op2.name) != 0)
		return true;
	else
		return false;

}
bool operator <(const char * name, const activity & op2)
{
	if(strcmp(name,op2.name) < 0)
		return true;
	else
		return false;

}
bool operator <(const activity & op1, const char * name)
{
	if(strcmp(op1.name,name) < 0)
		return true;
	else
		return false;

}
bool operator <(const activity & op1, const activity & op2)
{
	if(strcmp(op1.name,op2.name) < 0)
		return true;
	else
		return false;

}
bool operator <=(const char * name, const activity & op2)
{
	if(strcmp(name,op2.name) <= 0)
		return true;
	else
		return false;

}
bool operator <=(const activity & op1, const char * name)
{
	if(strcmp(op1.name,name) <= 0)
		return true;
	else
		return false;

}
bool operator <=(const activity & op1, const activity & op2)
{
	if(strcmp(op1.name,op2.name) <= 0)
		return true;
	else
		return false;

}
bool operator >(const char * name, const activity & op2)
{
	if(strcmp(name,op2.name) > 0)
		return true;
	else
		return false;

}
bool operator >(const activity & op1, const char * name)
{
	if(strcmp(op1.name,name) > 0)
		return true;
	else
		return false;

}
bool operator >(const activity & op1, const activity & op2)
{
	if(strcmp(op1.name,op2.name) > 0)
		return true;
	else
		return false;

}
bool operator >=(const char * name, const activity & op2)
{
	if(strcmp(name,op2.name) >= 0)
		return true;
	else
		return false;
}
bool operator >=(const activity & op1, const char * name)
{
	if(strcmp(op1.name,name) >= 0)
		return true;
	else
		return false;

}
bool operator >=(const activity & op1, const activity & op2)
{
	if(strcmp(op1.name,op2.name) >= 0)
		return true;
	else
		return false;

}
tour::tour():location(" "), time(0)
{
}

game::game():game_name(nullptr)
{
}

game::~game()
{
	delete [] game_name;
}

game::game(const game & to_copy):activity(to_copy)
{
	game_name = new char[strlen(to_copy.game_name)+1];
	strcpy(name,to_copy.game_name);
}

game & game::operator=(const game & src)
{
	if(this == &src)
		return *this;
	if(game_name)
		delete [] game_name;
	strcpy(game_name,src.game_name);
	return *this;
}


beach::beach():beach_name(" ")
{
}




int game::display() const
{
	if(!name)
		throw 0;
	cout<<game_name<<endl;
	return 1;
	

}













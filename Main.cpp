#include<iostream>	//It is a 'Preprocessor' because of the hash. Preprocessing is done before compilation. 
void PrimitiveDataTypes();
void Pointers();
void References();

#define Log(x) std::cout << x << std::endl	

using namespace std; //using standard namespace

class Log
{
public:
	/*
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
	*/

	// replacing above variables with enum
	enum LogLevel
	{
		LogLevelError = 0, LogLevelWarning, LogLevelInfo
	};

private:
	LogLevel m_LogLevel = LogLevelInfo; // default logLevel

public:
	void SetLevel(LogLevel level)
	{
		m_LogLevel = level;
	}

	void Error(const char* message)
	{
		if (m_LogLevel >= LogLevelError)
			cout << "[ERROR]: " << message << endl;
	}

	void Warn(const char* message)
	{
		if (m_LogLevel >= LogLevelWarning)
			cout << "[WARNING]: " << message << endl;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LogLevelInfo)
			cout << "[INFO]: " << message << endl;
	}
};

int main() 
{
	cout << "Hello World" << endl;
	//cin >> a; // simple cin doesn't take whitespaces 
	//char a[256];

	//cin.get(a, 3); // use cin.get() to take whitespaces into account. cin.get() waits for enter for further program execution
	//cin.get(a,2) takes one character along with a whitespace
	//cout << a;

	//std::cout << Multiply(5, 8) << std::endl;

	// Exploring primitive data types
	//PrimitiveDataTypes();

	//Pointers();
	//References();

	Log log;
	log.SetLevel(Log::LogLevelInfo); // function to set log level explicitly
	log.Warn("Hi, I am a warning!");
	log.Error("Hi, I am an Error!!");
	log.Info("Hi, I am just info.");



	return 0; //not really needed because int main is defaulted to it
}

/* Workflow:

1) Preprocessing - Header files aren't compiled rather only copied to the cpp file. 

2) Compilation - Multiple cpp files are compiled individually into something called object files i.e, .obj. 

3) Linking - It takes all obj files and stitch them together into .exe file.
*/
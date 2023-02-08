#include <iostream>

using namespace std;

	void printHelp();
	void checkOptions(string args[], int size);
	void massRename(int argc);

	int main(int argc, char *argv[], char *envp[])
	{
		const int size = argc;

		string args[size] = {};

		for (int i = 0; i < argc; i++)
		{
			args[i] = argv[i];
			cout << "arg " << i << ": " << args[i] << endl;
		}

		if (argc <= 1)
		{
			printHelp();
		}
		else
		{
			if (args[0] == "-")
			{
				checkOptions(args, argc);
			}
			else
			{
				cout << "\nUsage:\tmultitool [options]\n\t(to perform actions!!!)\n   or\tmultitool\n\t(display help menu)\n" << endl;
			}
		}

		return 0;
	}

	void printHelp()
	{
		cout << "\nWelcome to Multitool!\n"
			<< "\n--rename, -r\tRecursively renames files with a shared number\n"
			<< endl;
	}

	void checkOptions(string args[], int size)
	{
		cout << "frick" << endl;
	}

	void massRename(int argc)
	{
		cout << "NOTICE: this program increments the number before the last dot in your file's title!\nex: clip_1.mp4 to clip_2.mp4" << endl;

		string x;

		cin >> x;

		cout << x << endl;

		if (argc > 0)
		{
			cout << "DIRECTORY AND FILENAME DETECTED! PROCEED WITH CAUTION!" << endl; // ⚠
		}
	}
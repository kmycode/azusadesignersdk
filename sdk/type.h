#ifndef TYPE_H
#define TYPE_H

// SDK version
#define AZUSADESIGNERSDK_VERSION 1

/*
 * AzusaDesigner version (0.0.0)
 */
struct AzusaDesignerVersion {
	enum Flags {
		DEVELOP,
		ALPHA,
		BETA,
		PRODUCT
	};
	int major;					// major version
	int minor;					// minor version
	int minor2;					// second minor version
	Flags flag = PRODUCT;
	bool operator==(AzusaDesignerVersion& other) {
		return this->major == other.major && this->minor == other.minor && this->minor2 == other.minor2 && this->flag == other.flag;
	}
	bool operator>(AzusaDesignerVersion& other) {
		return this->major > other.major ||
				(this->major == other.major && this->minor > other.minor) ||
				(this->major == other.major && this->minor == other.minor && this->minor2 > other.minor2) ||
				(this->major == other.major && this->minor == other.minor && this->minor2 == other.minor2 && this->flag > other.flag)
				;
	}
};

/*
 * plugin information
 */
struct PluginInformation {
	const int sdkVersion = AZUSADESIGNERSDK_VERSION;		// SDK version
	const char* name;			// plugin name
	const char* author;			// plugin author's name
	const int version = 0;		// plugin version
	const char* fixedIdentifier;	// plugin's fixed identifier (used for file name, etc. don't change in the middle)
	PluginInformation(const char* name, const char* author, const int version, const char* fixedIdentifier) {
		this->name = name;
		this->author = author;
		int* versionPtr = const_cast<int*>(&this->version);
		*versionPtr = version;
		this->fixedIdentifier = fixedIdentifier;
	}
};

#endif // TYPE_H

#ifndef TYPE_H
#define TYPE_H

// SDK version
#define AZUSADESIGNERSDK_VERSION 1

/*
 * AzusaDesigner version
 */
struct AzusaDesignerVersion {
	int major;
	int minor;
	int minor2;
	bool operator==(AzusaDesignerVersion& other) {
		return this->major == other.major && this->minor == other.minor && this->minor2 == other.minor2;
	}
	bool operator>(AzusaDesignerVersion& other) {
		return this->major > other.major ||
				(this->major == other.major && this->minor > other.minor) ||
				(this->major == other.major && this->minor == other.minor && this->minor2 > other.minor2)
				;
	}
};

#endif // TYPE_H

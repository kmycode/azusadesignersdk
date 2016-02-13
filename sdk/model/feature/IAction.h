#ifndef IACTION_H
#define IACTION_H

class IAction
{
public:
	explicit IAction() {}

	enum ActionGenre {
		ACTION_FILE,
		ACTION_EDIT,
		ACTION_TOOL,
		ACTION_HELP,
	};

	virtual ActionGenre genre() = 0;
	virtual const char* name() = 0;
	virtual void onAction() = 0;
};

#endif // IACTION_H

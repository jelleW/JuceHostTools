/*
  ==============================================================================

    Main.h
    Created: 2 Oct 2015 3:57:42pm
    Author:  weste

  ==============================================================================
*/

#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include "BASEPluginHostApplication.h"
#include "MidiInputProcessor.h"

//==============================================================================
class VSTHostGUITestApplication : public BASEPluginHostApplication
{
public:
	//==============================================================================
	VSTHostGUITestApplication();
	void init() override;
	void close() override;

	//==============================================================================
	/*
	This class implements the desktop window that contains an instance of
	our MainContentComponent class.
	*/
	class MainWindow : public DocumentWindow
	{
	public:
		MainWindow(String name);

		void closeButtonPressed() override;

		/* Note: Be careful if you override any DocumentWindow methods - the base
		class uses a lot of them, so by overriding you might break its functionality.
		It's best to do all your work in your content component instead, but if
		you really have to override any DocumentWindow methods, make sure your
		subclass also calls the superclass's method.
		*/

	private:
		Component* mainComponent;
		JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MainWindow)
	};

private:
	MainWindow* mainWindow;
	AudioDeviceManager* deviceManager;
};



#endif  // MAIN_H_INCLUDED

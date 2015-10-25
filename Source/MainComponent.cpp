/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"
#include "BaseMainWindow.h"


//==============================================================================
MainContentComponent::MainContentComponent()
{
    setSize (800, 600);

	//mainWindow = new BaseMainWindow();
	//addAndMakeVisible(mainWindow);
}

MainContentComponent::~MainContentComponent()
{
	setVisible(false);
	//delete mainWindow;
}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.

	//mainWindow->parentSizeChanged();
}

/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.2.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "BaseMainWindow.h"
#include "BaseBodyComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
BaseMainWindow::BaseMainWindow ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (LeftMenuComponent = new Component());
    LeftMenuComponent->setName ("LeftMenuComponent");

    addAndMakeVisible (component2 = new Component());
    component2->setName ("new component");

    addAndMakeVisible (component = new Component());
    component->setName ("new component");


    //[UserPreSize]
    //[/UserPreSize]

    setSize (800, 600);


    //[Constructor] You can add your own custom stuff here..
	Component* comp = new BaseBodyComponent();

	component2->addAndMakeVisible(comp);

    //[/Constructor]
}

BaseMainWindow::~BaseMainWindow()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    LeftMenuComponent = nullptr;
    component2 = nullptr;
    component = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void BaseMainWindow::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void BaseMainWindow::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    LeftMenuComponent->setBounds (proportionOfWidth (0.0000f), proportionOfHeight (0.0000f), 150, proportionOfHeight (0.8253f));
    component2->setBounds (proportionOfWidth (0.1482f), proportionOfHeight (0.0000f), getWidth() - 512, proportionOfHeight (0.8253f));
    component->setBounds (proportionOfWidth (0.6423f), proportionOfHeight (0.0000f), 150, proportionOfHeight (0.8253f));
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="BaseMainWindow" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="800" initialHeight="600">
  <BACKGROUND backgroundColour="ffffffff"/>
  <GENERICCOMPONENT name="LeftMenuComponent" id="7d70956bccf11d6f" memberName="LeftMenuComponent"
                    virtualName="" explicitFocusOrder="0" pos="0% 0% 150 82.531%"
                    class="Component" params=""/>
  <GENERICCOMPONENT name="new component" id="a995fa2e9e13ce2" memberName="component2"
                    virtualName="" explicitFocusOrder="0" pos="14.822% 0% 512M 82.531%"
                    class="Component" params=""/>
  <GENERICCOMPONENT name="new component" id="3ab39897ef787c28" memberName="component"
                    virtualName="" explicitFocusOrder="0" pos="64.229% 0% 150 82.531%"
                    class="Component" params=""/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

/*
  ==============================================================================

    Describes the editing process and window drawing and GUI elements of this
    ping-pong delay plug-in.

    Author: Aiden R Nairne
    Email: anairn12@caledonian.ac.uk    

  ==============================================================================
*/


#include "PluginProcessor.h"
#include "PluginEditor.h"




//==============================================================================
PpdelayAudioProcessorEditor::PpdelayAudioProcessorEditor (PpdelayAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.

    // Sets the size of the plug-in window (Left as default)
    setSize (600, 400);
}

PpdelayAudioProcessorEditor::~PpdelayAudioProcessorEditor()
{
}






//==============================================================================
void PpdelayAudioProcessorEditor::paint (Graphics& g)
{

    // Background colour has been changed from the deafault white, instead using black
    g.fillAll (Colours::black);

    // Uses red as the colour for drawing
    g.setColour (Colours::red);

    // Font size is set
    g.setFont (20.0f);

    // Adds a label to the plug-in window
    g.drawFittedText ("King Pong", 0, 0, getWidth(), 30, Justification::centred, 1);
}

void PpdelayAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}

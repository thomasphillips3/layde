#include "PluginProcessor.h"
#include "PluginEditor.h"

DelayAudioProcessorEditor::DelayAudioProcessorEditor (DelayAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    slider.setSliderStyle(juce::Slider::SliderStyle::RotaryHorizontalVerticalDrag);
    slider.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 70, 16);
    slider.setBounds(0, 0, 70, 86);
    addAndMakeVisible(slider);
    setSize (500, 330);
}

DelayAudioProcessorEditor::~DelayAudioProcessorEditor()
{
}

void DelayAudioProcessorEditor::paint (juce::Graphics& g)
{
    g.fillAll (juce::Colours::darkgreen);
}

void DelayAudioProcessorEditor::resized()
{
    slider.setTopLeftPosition(215, 120);

}

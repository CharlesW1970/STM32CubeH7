/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FANKNOBBASE_HPP
#define FANKNOBBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class FanKnobBase : public touchgfx::Container
{
public:
    FanKnobBase();
    virtual ~FanKnobBase() {}
    virtual void initialize();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Container containerKnob;
    touchgfx::Image imageKnob;
    touchgfx::TextAreaWithOneWildcard textAreaKnob;


    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREAKNOB_SIZE = 3;
    touchgfx::Unicode::UnicodeChar textAreaKnobBuffer[TEXTAREAKNOB_SIZE];

private:

};

#endif // FANKNOBBASE_HPP
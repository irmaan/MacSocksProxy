//
//  PreferencesWindow.h
//  sshproxy
//
//  Created by Mirzanejad on 6/26/14.
//

#import <Foundation/Foundation.h>
#import "MASPreferencesViewController.h"

@interface GeneralPreferencesViewController : NSViewController <MASPreferencesViewController> {
    IBOutlet NSTextField* remoteHostTextField;
    IBOutlet NSTextField* remotePortTextField;
    IBOutlet NSStepper* remotePortStepper;
    
    IBOutlet NSTextField* loginNameTextField;
    IBOutlet NSTextField* localPortTextField;
    IBOutlet NSStepper* localPortStepper;
    
    IBOutlet NSButton* autoConnectButton;
    
    IBOutlet NSButton* startAtLoginButton;
    IBOutlet NSPanel* advancedPanel;
}

-(IBAction)remoteStepperAction:(id)sender;

-(IBAction)localStepperAction:(id)sender;

-(IBAction)toggleLaunchAtLogin:(id)sender;

-(IBAction)closePreferencesWindow:(id)sender;

@end
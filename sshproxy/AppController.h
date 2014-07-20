//
//  AppController.h
//  sshproxy
//
//  Created by Mirzanejad on 6/26/14.
//

#import <Cocoa/Cocoa.h>
#import "GeneralPreferencesViewController.h"

@interface AppController : NSObject <NSApplicationDelegate> {
    /* Our outlets which allow us to access the interface */
    IBOutlet NSMenu *statusMenu;
    IBOutlet NSMenuItem* statusMenuItem;
    IBOutlet NSMenuItem* turnOnMenuItem;
    IBOutlet NSMenuItem* turnOffMenuItem;
    IBOutlet NSWindow* aboutWindow;
    IBOutlet NSMenu* mainMenu;
    
    /* The other stuff :P */
    NSStatusItem *statusItem;
    NSImage *offStatusImage;
    NSImage *statusHighlightImage;
    NSImage *onStatusImage;
    NSImage *inStatusImage;
    
    NSTask *task;
    NSPipe *pipe;
    NSString* taskOutput;
    
    int proxyStatus;
    
    NSWindowController *_preferencesWindowController;
}

@property (nonatomic, readonly) NSWindowController *preferencesWindowController;

/* Our IBAction which will call the helloWorld method when our connected Menu Item is pressed */

-(IBAction)turnOnProxy:(id)sender;

-(IBAction)_turnOnProxy:(id)sender;

-(IBAction)turnOffProxy:(id)sender;

-(IBAction)openPreferences:(id)sender;
-(IBAction)openAboutWindow:(id)sender;

enum {
    SSHPROXY_OFF = 0,
    SSHPROXY_ON,
    SSHPROXY_DISCONNECTED,
    SSHPROXY_CONNECTED,
};

@end

//
//  PreferencesController.h
//  Musica
//
//  Created by Chloe Stars on 9/10/10.
//  Copyright 2010 Ozipto. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ServiceManagement/ServiceManagement.h>

@interface PreferencesController : NSWindowController {
	IBOutlet NSPopUpButton *musicaWindowButton;
	IBOutlet NSScrollView *pluginsView;
	IBOutlet NSTableView *oMyTableView;
    IBOutlet NSToolbar *toolbar;
    IBOutlet NSView *generalView;
    IBOutlet NSView *themesView;
    IBOutlet NSToolbarItem *defaultItem;
    IBOutlet NSSegmentedControl *loginSwitch;
}

@property (strong, nonatomic) IBOutlet NSPopUpButton *musicaWindowButton;

-(IBAction)relaunch:(id)sender;
-(IBAction)toggleLoginItem:(id)sender;
-(IBAction)toggleDockArt:(id)sender;
-(IBAction)toggleShowingMusica:(id)sender;
-(IBAction)selectedWindowMode:(id)sender;
-(IBAction)gotoPluginWebpage:(id)sender;
-(IBAction)switchViews:(NSToolbarItem *)item;

@end

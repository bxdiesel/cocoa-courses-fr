//
//  MagicSlateAppDelegate.h
//  MagicSlate
//
//  Created by Yoann GINI on 22/01/10.
//  Copyright 2010 iNig-Services. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MagicSlateAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end

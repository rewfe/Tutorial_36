//
//  ViewController.h
//  Tutorial_36
//
//  Created by Admin on 24.06.15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TestViewController.h"

@interface ViewController : UIViewController <UIActionSheetDelegate, TestViewControllerDelegate>

- (IBAction)showNormalActionSheet:(id)sender;
- (IBAction)showDeleteConfirmation:(id)sender;

- (IBAction)showColorsActionSheet:(id)sender;
- (IBAction)showUserDataEntryForm:(id)sender;

@end


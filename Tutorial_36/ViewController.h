//
//  ViewController.h
//  Tutorial_36
//
//  Created by Admin on 24.06.15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIActionSheetDelegate>

- (IBAction)showNormalActionSheet:(id)sender;
- (IBAction)showDeleteConfirmation:(id)sender;

- (IBAction)showColorsActionSheet:(id)sender;

@end


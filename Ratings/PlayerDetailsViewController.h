//
//  PlayerDetailsViewController.h
//  Ratings
//
//  Created by Tanvi Jindal on 9/26/13.
//  Copyright (c) 2013 Tanvi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Player.h"
#import "GamePickerViewController.h"

@class PlayerDetailsViewController;

@protocol PlayerDetailsViewcontrollerDelegate <NSObject>

- (void)playerDetailsViewControllerDidCancel:(PlayerDetailsViewController *)controller;
- (void)playerDetailsViewController:(PlayerDetailsViewController *)controller didAddPlayer:(Player *)player;

@end

@interface PlayerDetailsViewController : UITableViewController <UITableViewDelegate, GamePickerViewControllerDelegate>

@property (nonatomic, weak)id <PlayerDetailsViewcontrollerDelegate> delegate;
@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UILabel *detailLabel;

- (IBAction)playerAddCancelled:(id)sender;
- (IBAction)playerAddDone:(id)sender;

@end

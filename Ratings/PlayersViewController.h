//
//  PlayersViewController.h
//  Ratings
//
//  Created by Tanvi Jindal on 9/26/13.
//  Copyright (c) 2013 Tanvi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"

@interface PlayersViewController : UITableViewController <PlayerDetailsViewcontrollerDelegate>

- (IBAction)addTapped:(id)sender;

@property (nonatomic, strong) NSMutableArray *players;

@end

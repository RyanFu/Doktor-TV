//
//  EpisodeCollectionViewCell.h
//  Doktor TV
//
//  Created by Tobias DM on 16/11/13.
//  Copyright (c) 2013 developmunk. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Episode;

@interface EpisodeCollectionViewCell : UICollectionViewCell

@property (nonatomic, strong) Episode *episode;

@end

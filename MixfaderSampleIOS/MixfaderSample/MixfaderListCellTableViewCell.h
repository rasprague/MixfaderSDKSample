/*
 * Copyright (C) 2016 Djit SAS
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
//
//  MixfaderListCellTableViewCell.h
//  MixfaderSample
//
//  Created by Jean-baptiste Fabre on 23/05/2016.
//  Copyright © 2016 djit. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MixfaderSDK_iOS/MixfaderSDK_iOS.h>

@interface MixfaderListCellTableViewCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *mixfaderNameLabel;

@property (nonatomic, weak) IBOutlet UILabel *mixfaderRSSILabel;

@property (nonatomic, weak) IBOutlet UIView *mixfaderColorView;

@property (nonatomic, weak) IBOutlet UILabel *mixfaderConnectedLabel;

- (void)updateWithInterface:(MXFMixfaderInterface*)interface;

@end
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
//  MixfaderStatsTableViewCell.h
//  MixfaderSample
//
//  Created by Jean-baptiste Fabre on 25/05/2016.
//  Copyright © 2016 djit. All rights reserved.
//

#import "MixfaderTableViewCell.h"

@interface MixfaderStatsTableViewCell : MixfaderTableViewCell

@property (weak, nonatomic) IBOutlet UILabel *crossfaderStatLabel;
@property (weak, nonatomic) IBOutlet UILabel *connectionStatLabel;
@property (weak, nonatomic) IBOutlet UILabel *batteryStatLabel;
@property (weak, nonatomic) IBOutlet UILabel *buttonStatLabel;

@end

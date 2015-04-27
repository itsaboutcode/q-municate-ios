//
//  QMHistoryDataSource.h
//  Q-municate
//
//  Created by Andrey Ivanov on 11.03.15.
//  Copyright (c) 2015 Quickblox. All rights reserved.
//

#import "QMTableViewDataSource.h"

@class QMHistoryDataSource;

@protocol QMHistoryDataSourceHandler <NSObject>

- (QBUUser *)historyDataSource:(QMHistoryDataSource *)historyDataSource recipientWithIDs:(NSArray *)userIDs;

@end

@interface QMHistoryDataSource : QMTableViewDataSource

@property (weak, nonatomic) id <QMHistoryDataSourceHandler>handler;

@end

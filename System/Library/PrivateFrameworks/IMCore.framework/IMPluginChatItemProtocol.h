/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, IMBalloonPluginDataSource;


@protocol IMPluginChatItemProtocol <NSObject>
@property (nonatomic,retain,readonly) NSString * type; 
@property (nonatomic,retain,readonly) IMBalloonPluginDataSource * dataSource; 
@property (nonatomic,readonly) BOOL isFromMe; 
@required
-(NSString *)type;
-(IMBalloonPluginDataSource *)dataSource;
-(BOOL)isFromMe;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NFLAbstractCellPropertyProvider, NFLFeedSettings;

@interface NFLAbstractCellSizer : NSObject {

	NFLAbstractCellPropertyProvider* _propertyProvider;
	NFLFeedSettings* _feedSettings;

}

@property (assign,nonatomic,__weak) NFLFeedSettings * feedSettings;                           //@synthesize feedSettings=_feedSettings - In the implementation block
@property (nonatomic,retain) NFLAbstractCellPropertyProvider * propertyProvider;              //@synthesize propertyProvider=_propertyProvider - In the implementation block
-(id)init;
-(NFLFeedSettings *)feedSettings;
-(void)setFeedSettings:(NFLFeedSettings *)arg1 ;
-(void)setPropertyProvider:(NFLAbstractCellPropertyProvider *)arg1 ;
-(id)layoutDataForTileInfo:(id)arg1 template:(id)arg2 columnSpan:(unsigned long long)arg3 showAccessoryText:(BOOL)arg4 ;
-(NFLAbstractCellPropertyProvider *)propertyProvider;
-(id)initWithFeedSettings:(id)arg1 ;
@end

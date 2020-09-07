/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNUINavigationListStyle;
@class NSNumber;

@interface CNUINavigationListViewCellHeightEstimator : NSObject {

	id<CNUINavigationListStyle> _navigationListStyle;
	NSNumber* _estimatedCellHeightNumber;
	NSNumber* _estimatedDetailCellHeightNumber;

}

@property (nonatomic,retain) id<CNUINavigationListStyle> navigationListStyle;              //@synthesize navigationListStyle=_navigationListStyle - In the implementation block
@property (nonatomic,retain) NSNumber * estimatedCellHeightNumber;                         //@synthesize estimatedCellHeightNumber=_estimatedCellHeightNumber - In the implementation block
@property (nonatomic,retain) NSNumber * estimatedDetailCellHeightNumber;                   //@synthesize estimatedDetailCellHeightNumber=_estimatedDetailCellHeightNumber - In the implementation block
@property (nonatomic,readonly) double estimatedCellHeight; 
@property (nonatomic,readonly) double estimatedDetailCellHeight; 
-(void)setNavigationListStyle:(id<CNUINavigationListStyle>)arg1 ;
-(id<CNUINavigationListStyle>)navigationListStyle;
-(id)initWithNavigationListStyle:(id)arg1 ;
-(double)estimatedCellHeight;
-(double)estimatedDetailCellHeight;
-(NSNumber *)estimatedCellHeightNumber;
-(void)setEstimatedCellHeightNumber:(NSNumber *)arg1 ;
-(NSNumber *)estimatedDetailCellHeightNumber;
-(void)setEstimatedDetailCellHeightNumber:(NSNumber *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@protocol EKEventDetailNotesCellDelegate;
@class UITableViewCell;

@interface EKEventNotesDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;
	UITableViewCell* _moreButtonCell;
	BOOL _cellNeedsUpdate;
	id<EKEventDetailNotesCellDelegate> _noteDelegate;

}

@property (assign,nonatomic,__weak) id<EKEventDetailNotesCellDelegate> noteDelegate;              //@synthesize noteDelegate=_noteDelegate - In the implementation block
-(void)reset;
-(void)setCellPosition:(int)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)_updateCellIfNeeded;
-(unsigned long long)numberOfSubitems;
-(id<EKEventDetailNotesCellDelegate>)noteDelegate;
-(void)setNoteDelegate:(id<EKEventDetailNotesCellDelegate>)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(BOOL)hasDetailViewControllerAtIndex:(unsigned long long)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)requiresLayoutForSubitemCount;
-(unsigned long long)maximumNumberOfSubItems;
@end


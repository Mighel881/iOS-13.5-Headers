/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUILabel.h>

@protocol VUIRentalExpirationLabelDelegate;
@class NSDate, NSString, NSTimer;

@interface VUIRentalExpirationLabel : VUILabel {

	NSDate* _expirationDate;
	id<VUIRentalExpirationLabelDelegate> _delegate;
	NSString* _locStringPrefix;
	NSTimer* _expiryUpdateTimer;

}

@property (nonatomic,copy) NSString * locStringPrefix;                                          //@synthesize locStringPrefix=_locStringPrefix - In the implementation block
@property (nonatomic,retain) NSTimer * expiryUpdateTimer;                                       //@synthesize expiryUpdateTimer=_expiryUpdateTimer - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                             //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic,__weak) id<VUIRentalExpirationLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)labelWithExpirationDate:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3 locStringPrefix:(id)arg4 ;
+(id)_calculateExpirationStringForDate:(id)arg1 displayWarningColor:(BOOL*)arg2 updateInterval:(long long*)arg3 locStringPrefix:(id)arg4 ;
+(id)calculateExpirationStringForDate:(id)arg1 updateInterval:(long long*)arg2 locStringPrefix:(id)arg3 ;
-(void)dealloc;
-(id<VUIRentalExpirationLabelDelegate>)delegate;
-(void)setDelegate:(id<VUIRentalExpirationLabelDelegate>)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)invalidateTimer;
-(void)setLocStringPrefix:(NSString *)arg1 ;
-(void)_computeExpirationLabel:(id)arg1 ;
-(NSString *)locStringPrefix;
-(NSTimer *)expiryUpdateTimer;
-(void)setExpiryUpdateTimer:(NSTimer *)arg1 ;
@end


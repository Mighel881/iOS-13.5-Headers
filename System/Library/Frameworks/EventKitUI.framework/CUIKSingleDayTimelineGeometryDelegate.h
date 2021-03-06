/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CUIKSingleDayTimelineGeometryDelegate <NSObject>
@property (nonatomic,readonly) CGRect displayedRect; 
@property (nonatomic,readonly) double hourHeight; 
@property (nonatomic,readonly) double topPadding; 
@property (nonatomic,readonly) double timeWidth; 
@property (nonatomic,readonly) BOOL originIsUpperLeft; 
@optional
-(BOOL)shouldReverseLayoutDirection;

@required
-(double)topPadding;
-(CGPoint*)pointForDate:(double)arg1;
-(double)dateForPoint:(CGPoint)arg1;
-(double)hourHeight;
-(double)timeWidth;
-(CGRect)displayedRect;
-(BOOL)originIsUpperLeft;

@end


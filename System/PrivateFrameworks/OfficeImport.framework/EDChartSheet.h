/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDSheet.h>

@class CHDChart;

@interface EDChartSheet : EDSheet {

	CHDChart* mMainChart;
	BOOL mIsBoundsSet;
	CGRect mBounds;

}
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)teardown;
-(BOOL)areBoundsSet;
-(id)mainChart;
-(void)addDrawable:(id)arg1 ;
-(void)setMainChart:(id)arg1 ;
@end

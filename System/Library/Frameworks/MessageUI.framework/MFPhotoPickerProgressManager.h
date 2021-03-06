/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MFPhotoPickerProgressManager : NSObject {

	NSMutableDictionary* _progressItems;

}

@property (nonatomic,readonly) NSMutableDictionary * progressItems;              //@synthesize progressItems=_progressItems - In the implementation block
-(id)init;
-(BOOL)anyRequestExists;
-(void)cancelEverything;
-(double)progressForIndexPath:(id)arg1 ;
-(BOOL)requestExistsForIndexPath:(id)arg1 ;
-(void)setProgress:(double)arg1 forIndexPath:(id)arg2 ;
-(void)setExportSession:(id)arg1 forIndexPath:(id)arg2 ;
-(void)cancelEverythingAtIndexPath:(id)arg1 ;
-(void)setImageRequestID:(int)arg1 forIndexPath:(id)arg2 ;
-(NSMutableDictionary *)progressItems;
-(void)_cancelProgressItem:(id)arg1 ;
@end


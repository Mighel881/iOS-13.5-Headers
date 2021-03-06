/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSOutputStream;

@interface ARBVHExporter : NSObject {

	NSString* _filePath;
	NSString* _tmpFilePath;
	int _numberFrames;
	 _scale;
	long long _exportType;
	NSOutputStream* _framesStreamToFile;
	BOOL _running;

}

@property (nonatomic,readonly) BOOL running;              //@synthesize running=_running - In the implementation block
+(id)headerByApplyingScale:;
+(id)liftedSkeletonHeaderByApplyingScale:;
+(id)stickFigureHeaderByApplyingScale:;
-(void)stop;
-(void)start;
-(BOOL)running;
-(id)initWithFilePath:(id)arg1 type:(long long)arg2 ;
-(void)appendBodyAnchor:(id)arg1 ;
@end


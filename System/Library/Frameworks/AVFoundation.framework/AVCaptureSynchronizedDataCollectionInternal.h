/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureOutput, AVCaptureSynchronizedData, NSArray;

@interface AVCaptureSynchronizedDataCollectionInternal : NSObject {

	AVCaptureOutput* dataOutputs[4];
	AVCaptureSynchronizedData* synchronizedData[4];
	char count;
	unsigned long long changeSeed;
	SCD_Struct_AV7 creationTime;
	NSArray* possibleDataOutputs;

}
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/ICAction.h>

@class NSArray;

@interface ICDocumentAction : ICAction {

	NSArray* _inputContentClasses;
	NSArray* _fileTypes;

}

@property (nonatomic,readonly) NSArray * fileTypes;              //@synthesize fileTypes=_fileTypes - In the implementation block
-(id)name;
-(id)identifier;
-(NSArray *)fileTypes;
-(id)inputContentClasses;
-(id)descriptionDictionary;
-(void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(id)fileTypeForOpeningItem:(id)arg1 ;
@end

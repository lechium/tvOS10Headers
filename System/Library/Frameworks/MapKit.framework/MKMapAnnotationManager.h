/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKAnnotationManager.h>

@class MKAnnotationView;

@interface MKMapAnnotationManager : MKAnnotationManager {

	MKAnnotationView* _userLocationView;
	BOOL _addedUserLocationAnnotation;

}
-(id)_defaultUserLocationAnnotationView:(id)arg1 ;
-(id)newDefaultAnnotationRepresentationForAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)configureDefaultAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2 ;
-(void)configureAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2 ;
-(void)cleanUpAnnotationRepresentationForRemoval:(id)arg1 ;
-(BOOL)annotationIsInternal:(id)arg1 ;
-(BOOL)internalAnnotationAllowsCustomRepresentation:(id)arg1 ;
-(id)newInternalAnnotationRepresentationForInternalAnnotation:(id)arg1 ;
@end

#
# Be sure to run `pod lib lint RemoteCooperationSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'RemoteCooperationSDK'
  s.version          = '0.1.0'
  s.summary          = 'A short description of RemoteCooperationSDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/刘爽/RemoteCooperationSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '刘爽' => 'shuang.liu@rokid.com' }
  s.source           = { :git => 'https://github.com/刘爽/RemoteCooperationSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '10.0'
  
  s.vendored_frameworks = 'RemoteCooperationSDK/Classes/*.framework'
  s.resources = 'RemoteCooperationSDK/Assets/*.bundle'
  
  s.dependency 'RKILogger'
  s.dependency 'RKIUtils'
  s.dependency 'RKIHandyJSON'
  s.dependency 'Moya'
  s.dependency 'Starscream'
  s.dependency 'Kingfisher'
  s.dependency 'SnapKit', '>= 4.2.0'
  s.dependency 'Then', '>= 2.7.0'
  s.dependency 'SCNLine', '~> 1.0'
  s.dependency 'lottie-ios', '~> 3.1.6'
  s.dependency 'WMPageController'
  s.dependency 'ReachabilitySwift'

  s.dependency 'RKRTC'
  s.dependency 'RKCooperationCore'
end

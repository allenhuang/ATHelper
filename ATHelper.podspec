Pod::Spec.new do |spec|
  spec.name = "ATHelper"
  spec.version = "0.1.0"
  spec.summary = "Helper library for iOS development in App Trek Studio"
  spec.homepage = "https://github.com/allenhuang/ATHelper"
  spec.license = { type: 'MIT', file: 'LICENSE' }
  spec.authors = { "Allen Huang" => 'allen.w.huang@gmail.com' }

  spec.platform = :ios, "8.0"
  spec.requires_arc = true
  spec.source = { git: "https://github.com/allenhuang/ATHelper.git", tag: "v#{spec.version}", submodules: true }
  spec.source_files = "ATHelper/**/*.{h,m,swift}"
end
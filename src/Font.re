[@bs.module "expo"] [@bs.scope "expo-font"]
external _loadDict :
  Js.Dict.t(Rebolt.Packager.required) => Js.Promise.t(unit) =
  "loadAsync";

let loadAsync = fonts =>
  List.map(
    ((name, font: Rebolt.Packager.required)) => (name, font),
    fonts,
  )
  |> Js.Dict.fromList
  |> _loadDict;


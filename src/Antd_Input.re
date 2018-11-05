[@bs.module "antd/lib/input"]
external input: ReasonReact.reactClass = "default";

[%bs.raw {|require("antd/lib/input/style")|}];

[@bs.obj]
external makeProps:
  (
    ~value: string=?,
    ~defaultValue: string=?,
    ~onChange: ReactEvent.Form.t => unit=?,
    ~onPressEnter: ReactEvent.Keyboard.t => unit=?,
    ~onBlur: ReactEvent.Focus.t => unit=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~placeholder: string=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~value=?,
      ~defaultValue=?,
      ~onChange=?,
      ~onPressEnter=?,
      ~className=?,
      ~style=?,
      ~placeholder=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=input,
    ~props=
      makeProps(
        ~value?,
        ~defaultValue?,
        ~onChange?,
        ~onPressEnter?,
        ~className?,
        ~style?,
        ~placeholder?,
        (),
      ),
    children,
  );

module TextArea = {
  [@bs.module "antd/lib/input"]
  external reactClass: ReasonReact.reactClass = "TextArea";
  let make =
      (
        ~value=?,
        ~defaultValue=?,
        ~onChange=?,
        ~onPressEnter=?,
        ~onBlur=?,
        ~className=?,
        ~style=?,
        ~placeholder=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~value?,
          ~defaultValue?,
          ~onChange?,
          ~onPressEnter?,
          ~onBlur?,
          ~className?,
          ~style?,
          ~placeholder?,
          (),
        ),
      children,
    );
};
